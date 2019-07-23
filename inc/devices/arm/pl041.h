/* SPDX-License-Identifier: MIT */
#pragma once


#include <devices/arm/primecell.h>

namespace captive {
	namespace devices {
		namespace arm {

			class PL041 : public Primecell {
			public:
				PL041();
				virtual ~PL041();

				bool read(uint64_t off, uint8_t len, uint64_t& data) override;
				bool write(uint64_t off, uint8_t len, uint64_t data) override;

				virtual std::string name() const
				{
					return "pl041";
				}
			};
		}
	}
}

/**
 * Copyright (c) 2011-2018 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_TEST_MNEMONIC_HPP
#define LIBBITCOIN_TEST_MNEMONIC_HPP

#include <string>
#include <vector>
#include <bitcoin/bitcoin.hpp>

struct mnemonic_result
{
    std::string entropy;
    std::string mnemonic;
    std::string passphrase;
    std::string seed;
    bc::wallet::dictionary language;
};

typedef std::vector<mnemonic_result> mnemonic_result_list;

const mnemonic_result_list mnemonic_trezor_vectors
{
    {
        {
            "00000000000000000000000000000000",
            "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,about",
            "TREZOR",
            "c55257c360c07c72029aebc1b53c05ed0362ada38ead3e3e9efa3708e53495531f09a6987599d18264c1e1c92f2cf141630c7a3c4ab7c81b2f001698e7463b04",
            bc::wallet::language::en
        },
        {
            "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
            "legal,winner,thank,year,wave,sausage,worth,useful,legal,winner,thank,yellow",
            "TREZOR",
            "2e8905819b8723fe2c1d161860e5ee1830318dbf49a83bd451cfb8440c28bd6fa457fe1296106559a3c80937a1c1069be3a3a5bd381ee6260e8d9739fce1f607",
            bc::wallet::language::en
        },
        {
            "80808080808080808080808080808080",
            "letter,advice,cage,absurd,amount,doctor,acoustic,avoid,letter,advice,cage,above",
            "TREZOR",
            "d71de856f81a8acc65e6fc851a38d4d7ec216fd0796d0a6827a3ad6ed5511a30fa280f12eb2e47ed2ac03b5c462a0358d18d69fe4f985ec81778c1b370b652a8",
            bc::wallet::language::en
        },
        {
            "ffffffffffffffffffffffffffffffff",
            "zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,wrong",
            "TREZOR",
            "ac27495480225222079d7be181583751e86f571027b0497b5b5d11218e0a8a13332572917f0f8e5a589620c6f15b11c61dee327651a14c34e18231052e48c069",
            bc::wallet::language::en
        },
        {
            "000000000000000000000000000000000000000000000000",
            "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,agent",
            "TREZOR",
            "035895f2f481b1b0f01fcf8c289c794660b289981a78f8106447707fdd9666ca06da5a9a565181599b79f53b844d8a71dd9f439c52a3d7b3e8a79c906ac845fa",
            bc::wallet::language::en
        },
        {
            "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
            "legal,winner,thank,year,wave,sausage,worth,useful,legal,winner,thank,year,wave,sausage,worth,useful,legal,will",
            "TREZOR",
            "f2b94508732bcbacbcc020faefecfc89feafa6649a5491b8c952cede496c214a0c7b3c392d168748f2d4a612bada0753b52a1c7ac53c1e93abd5c6320b9e95dd",
            bc::wallet::language::en
        },
        {
            "808080808080808080808080808080808080808080808080",
            "letter,advice,cage,absurd,amount,doctor,acoustic,avoid,letter,advice,cage,absurd,amount,doctor,acoustic,avoid,letter,always",
            "TREZOR",
            "107d7c02a5aa6f38c58083ff74f04c607c2d2c0ecc55501dadd72d025b751bc27fe913ffb796f841c49b1d33b610cf0e91d3aa239027f5e99fe4ce9e5088cd65",
            bc::wallet::language::en
        },
        {
            "ffffffffffffffffffffffffffffffffffffffffffffffff",
            "zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,when",
            "TREZOR",
            "0cd6e5d827bb62eb8fc1e262254223817fd068a74b5b449cc2f667c3f1f985a76379b43348d952e2265b4cd129090758b3e3c2c49103b5051aac2eaeb890a528",
            bc::wallet::language::en
        },
        {
            "0000000000000000000000000000000000000000000000000000000000000000",
            "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,art",
            "TREZOR",
            "bda85446c68413707090a52022edd26a1c9462295029f2e60cd7c4f2bbd3097170af7a4d73245cafa9c3cca8d561a7c3de6f5d4a10be8ed2a5e608d68f92fcc8",
            bc::wallet::language::en
        },
        {
            "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
            "legal,winner,thank,year,wave,sausage,worth,useful,legal,winner,thank,year,wave,sausage,worth,useful,legal,winner,thank,year,wave,sausage,worth,title",
            "TREZOR",
            "bc09fca1804f7e69da93c2f2028eb238c227f2e9dda30cd63699232578480a4021b146ad717fbb7e451ce9eb835f43620bf5c514db0f8add49f5d121449d3e87",
            bc::wallet::language::en
        },
        {
            "8080808080808080808080808080808080808080808080808080808080808080",
            "letter,advice,cage,absurd,amount,doctor,acoustic,avoid,letter,advice,cage,absurd,amount,doctor,acoustic,avoid,letter,advice,cage,absurd,amount,doctor,acoustic,bless",
            "TREZOR",
            "c0c519bd0e91a2ed54357d9d1ebef6f5af218a153624cf4f2da911a0ed8f7a09e2ef61af0aca007096df430022f7a2b6fb91661a9589097069720d015e4e982f",
            bc::wallet::language::en
        },
        {
            "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
            "zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,zoo,vote",
            "TREZOR",
            "dd48c104698c30cfe2b6142103248622fb7bb0ff692eebb00089b32d22484e1613912f0a5b694407be899ffd31ed3992c456cdf60f5d4564b8ba3f05a69890ad",
            bc::wallet::language::en
        },
        {
            "77c2b00716cec7213839159e404db50d",
            "jelly,better,achieve,collect,unaware,mountain,thought,cargo,oxygen,act,hood,bridge",
            "TREZOR",
            "b5b6d0127db1a9d2226af0c3346031d77af31e918dba64287a1b44b8ebf63cdd52676f672a290aae502472cf2d602c051f3e6f18055e84e4c43897fc4e51a6ff",
            bc::wallet::language::en
        },
        {
            "b63a9c59a6e641f288ebc103017f1da9f8290b3da6bdef7b",
            "renew,stay,biology,evidence,goat,welcome,casual,join,adapt,armor,shuffle,fault,little,machine,walk,stumble,urge,swap",
            "TREZOR",
            "9248d83e06f4cd98debf5b6f010542760df925ce46cf38a1bdb4e4de7d21f5c39366941c69e1bdbf2966e0f6e6dbece898a0e2f0a4c2b3e640953dfe8b7bbdc5",
            bc::wallet::language::en
        },
        {
            "3e141609b97933b66a060dcddc71fad1d91677db872031e85f4c015c5e7e8982",
            "dignity,pass,list,indicate,nasty,swamp,pool,script,soccer,toe,leaf,photo,multiply,desk,host,tomato,cradle,drill,spread,actor,shine,dismiss,champion,exotic",
            "TREZOR",
            "ff7f3184df8696d8bef94b6c03114dbee0ef89ff938712301d27ed8336ca89ef9635da20af07d4175f2bf5f3de130f39c9d9e8dd0472489c19b1a020a940da67",
            bc::wallet::language::en
        },
        {
            "0460ef47585604c5660618db2e6a7e7f",
            "afford,alter,spike,radar,gate,glance,object,seek,swamp,infant,panel,yellow",
            "TREZOR",
            "65f93a9f36b6c85cbe634ffc1f99f2b82cbb10b31edc7f087b4f6cb9e976e9faf76ff41f8f27c99afdf38f7a303ba1136ee48a4c1e7fcd3dba7aa876113a36e4",
            bc::wallet::language::en
        },
        {
            "72f60ebac5dd8add8d2a25a797102c3ce21bc029c200076f",
            "indicate,race,push,merry,suffer,human,cruise,dwarf,pole,review,arch,keep,canvas,theme,poem,divorce,alter,left",
            "TREZOR",
            "3bbf9daa0dfad8229786ace5ddb4e00fa98a044ae4c4975ffd5e094dba9e0bb289349dbe2091761f30f382d4e35c4a670ee8ab50758d2c55881be69e327117ba",
            bc::wallet::language::en
        },
        {
            "2c85efc7f24ee4573d2b81a6ec66cee209b2dcbd09d8eddc51e0215b0b68e416",
            "clutch,control,vehicle,tonight,unusual,clog,visa,ice,plunge,glimpse,recipe,series,open,hour,vintage,deposit,universe,tip,job,dress,radar,refuse,motion,taste",
            "TREZOR",
            "fe908f96f46668b2d5b37d82f558c77ed0d69dd0e7e043a5b0511c48c2f1064694a956f86360c93dd04052a8899497ce9e985ebe0c8c52b955e6ae86d4ff4449",
            bc::wallet::language::en
        },
        {
            "eaebabb2383351fd31d703840b32e9e2",
            "turtle,front,uncle,idea,crush,write,shrug,there,lottery,flower,risk,shell",
            "TREZOR",
            "bdfb76a0759f301b0b899a1e3985227e53b3f51e67e3f2a65363caedf3e32fde42a66c404f18d7b05818c95ef3ca1e5146646856c461c073169467511680876c",
            bc::wallet::language::en
        },
        {
            "7ac45cfe7722ee6c7ba84fbc2d5bd61b45cb2fe5eb65aa78",
            "kiss,carry,display,unusual,confirm,curtain,upgrade,antique,rotate,hello,void,custom,frequent,obey,nut,hole,price,segment",
            "TREZOR",
            "ed56ff6c833c07982eb7119a8f48fd363c4a9b1601cd2de736b01045c5eb8ab4f57b079403485d1c4924f0790dc10a971763337cb9f9c62226f64fff26397c79",
            bc::wallet::language::en
        },
        {
            "4fa1a8bc3e6d80ee1316050e862c1812031493212b7ec3f3bb1b08f168cabeef",
            "exile,ask,congress,lamp,submit,jacket,era,scheme,attend,cousin,alcohol,catch,course,end,lucky,hurt,sentence,oven,short,ball,bird,grab,wing,top",
            "TREZOR",
            "095ee6f817b4c2cb30a5a797360a81a40ab0f9a4e25ecd672a3f58a0b5ba0687c096a6b14d2c0deb3bdefce4f61d01ae07417d502429352e27695163f7447a8c",
            bc::wallet::language::en
        },
        {
            "18ab19a9f54a9274f03e5209a2ac8a91",
            "board,flee,heavy,tunnel,powder,denial,science,ski,answer,betray,cargo,cat",
            "TREZOR",
            "6eff1bb21562918509c73cb990260db07c0ce34ff0e3cc4a8cb3276129fbcb300bddfe005831350efd633909f476c45c88253276d9fd0df6ef48609e8bb7dca8",
            bc::wallet::language::en
        },
        {
            "18a2e1d81b8ecfb2a333adcb0c17a5b9eb76cc5d05db91a4",
            "board,blade,invite,damage,undo,sun,mimic,interest,slam,gaze,truly,inherit,resist,great,inject,rocket,museum,chief",
            "TREZOR",
            "f84521c777a13b61564234bf8f8b62b3afce27fc4062b51bb5e62bdfecb23864ee6ecf07c1d5a97c0834307c5c852d8ceb88e7c97923c0a3b496bedd4e5f88a9",
            bc::wallet::language::en
        },
        {
            "15da872c95a13dd738fbf50e427583ad61f18fd99f628c417a61cf8343c90419",
            "beyond,stage,sleep,clip,because,twist,token,leaf,atom,beauty,genius,food,business,side,grid,unable,middle,armed,observe,pair,crouch,tonight,away,coconut",
            "TREZOR",
            "b15509eaa2d09d3efd3e006ef42151b30367dc6e3aa5e44caba3fe4d3e352e65101fbdb86a96776b91946ff06f8eac594dc6ee1d3e82a42dfe1b40fef6bcc3fd",
            bc::wallet::language::en
        }
    }
};

const mnemonic_result_list mnemonic_to_seed_vectors
{
    {
        {
            "",
            "legal,winner,thank,year,wave,sausage,worth,useful,legal,winner,thank,yellow",
            "博 肉 地 危 惜 多 陪 荒 因 患 伊 基",
            "3e52585ea1275472a82fa0dcd84121e742140f64a302eca7c390832ba428c707a7ebf449267ae592c51f1740259226e31520de39fd8f33e08788fd21221c6f4e",
            bc::wallet::language::en
        },
        {
            "",
            "previo,humilde,actuar,jarabe,tabique,ahorro,tope,pulpo,anís,señal,lavar,bahía",
            "博 肉 地 危 惜 多 陪 荒 因 患 伊 基",
            "f9d7e141ee29670d2b519d60529c3ad79d808fe1ed7b9505f8485f9bebf82b4c28b6363730873c20aeb3f0064bc901925e3a986a845d7239485f959accfcae16",
            bc::wallet::language::es
        }
    }
};

const mnemonic_result_list mnemonic_create_vectors
{
    {
        {
            "baadf00dbaadf00d",
            "rival,hurdle,address,inspire,tenant,alone",
            "",
            "",
            bc::wallet::language::en
        },
        {
            "baadf00dbaadf00dbaadf00dbaadf00d",
            "rival,hurdle,address,inspire,tenant,almost,turkey,safe,asset,step,lab,boy",
            "",
            "",
            bc::wallet::language::en
        },
        {
            "baadf00dbaadf00dbaadf00dbaadf00d",
            "previo,humilde,actuar,jarabe,tabique,ahorro,tope,pulpo,anís,señal,lavar,bahía",
            "",
            "",
            bc::wallet::language::es
        },
        {
            "baadf00dbaadf00dbaadf00dbaadf00d",
            "ねんかん,すずしい,あひる,せたけ,ほとんど,あんまり,めいあん,のべる,いなか,ふとる,ぜんりゃく,えいせい",
            "",
            "",
            bc::wallet::language::ja
        },
        {
            "baadf00dbaadf00dbaadf00dbaadf00d",
            "博,肉,地,危,惜,多,陪,荒,因,患,伊,基",
            "",
            "",
            bc::wallet::language::zh_Hans
        },
        {
            "baadf00dbaadf00dbaadf00dbaadf00d",
            "博,肉,地,危,惜,多,陪,荒,因,患,伊,基",
            "",
            "",
            bc::wallet::language::zh_Hant
        }
    }
};

const mnemonic_result_list mnemonic_no_passphrase
{
    {
        {
            "baadf00dbaadf00d",
            "rival,hurdle,address,inspire,tenant,alone",
            "",
            "33498afc5ef71e87afd7cad1e50a9d9adb9e30d3ca4b1da5dc370d266aa7796cbc1854eebce5ab3fd3b02b6625e2a82868dbb693e988e47d74106f04c76a6263",
            bc::wallet::language::en
        }
    }
};

// Implements all Japanese test vectors provided from:
// https://github.com/bip32JP/bip32JP.github.io/blob/master/test_JP_BIP39.json
//
// Originally referenced from:
// https://github.com/bitcoin/bips/blob/master/bip-0039.mediawiki#Test_vectors
const mnemonic_result_list mnemonic_japanese_vectors
{
    {
        "00000000000000000000000000000000",
        "あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あおぞら",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "a262d6fb6122ecf45be09c50492b31f92e9beb7d9a845987a02cefda57a15f9c467a17872029a9e92299b5cbdf306e3a0ee620245cbd508959b6cb7ca637bd55",
        bc::wallet::language::ja
    },

    {
        "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
        "そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,やちん,そつう,れきだい,ほんやく,わかめ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "aee025cbe6ca256862f889e48110a6a382365142f7d16f2b9545285b3af64e542143a577e9c144e101a6bdca18f8d97ec3366ebf5b088b1c1af9bc31346e60d9",
        bc::wallet::language::ja
    },

    {
        "80808080808080808080808080808080",
        "そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,いよく,そとづら,あまど,おおう,あかちゃん",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "e51736736ebdf77eda23fa17e31475fa1d9509c78f1deb6b4aacfbd760a7e2ad769c714352c95143b5c1241985bcb407df36d64e75dd5a2b78ca5d2ba82a3544",
        bc::wallet::language::ja
    },

    {
        "ffffffffffffffffffffffffffffffff",
        "われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,ろんぶん",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "4cd2ef49b479af5e1efbbd1e0bdc117f6a29b1010211df4f78e2ed40082865793e57949236c43b9fe591ec70e5bb4298b8b71dc4b267bb96ed4ed282c8f7761c",
        bc::wallet::language::ja
    },

    {
        "000000000000000000000000000000000000000000000000",
        "あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あらいぐま",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "d99e8f1ce2d4288d30b9c815ae981edd923c01aa4ffdc5dee1ab5fe0d4a3e13966023324d119105aff266dac32e5cd11431eeca23bbd7202ff423f30d6776d69",
        bc::wallet::language::ja
    },

    {
        "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
        "そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,やちん,そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,やちん,そつう,れいぎ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "eaaf171efa5de4838c758a93d6c86d2677d4ccda4a064a7136344e975f91fe61340ec8a615464b461d67baaf12b62ab5e742f944c7bd4ab6c341fbafba435716",
        bc::wallet::language::ja
    },

    {
       "808080808080808080808080808080808080808080808080",
       "そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,いよく,そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,いよく,そとづら,いきなり",
       "㍍ガバヴァぱばぐゞちぢ十人十色",
       "aec0f8d3167a10683374c222e6e632f2940c0826587ea0a73ac5d0493b6a632590179a6538287641a9fc9df8e6f24e01bf1be548e1f74fd7407ccd72ecebe425",
        bc::wallet::language::ja
    },

    {
        "ffffffffffffffffffffffffffffffffffffffffffffffff",
        "われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,りんご",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "f0f738128a65b8d1854d68de50ed97ac1831fc3a978c569e415bbcb431a6a671d4377e3b56abd518daa861676c4da75a19ccb41e00c37d086941e471a4374b95",
        bc::wallet::language::ja
    },

    {
        "0000000000000000000000000000000000000000000000000000000000000000",
        "あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,あいこくしん,いってい",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "23f500eec4a563bf90cfda87b3e590b211b959985c555d17e88f46f7183590cd5793458b094a4dccc8f05807ec7bd2d19ce269e20568936a751f6f1ec7c14ddd",
        bc::wallet::language::ja
    },

    {
        "7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f",
        "そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,やちん,そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,やちん,そつう,れきだい,ほんやく,わかす,りくつ,ばいか,ろせん,まんきつ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "cd354a40aa2e241e8f306b3b752781b70dfd1c69190e510bc1297a9c5738e833bcdc179e81707d57263fb7564466f73d30bf979725ff783fb3eb4baa86560b05",
        bc::wallet::language::ja
    },

    {
        "8080808080808080808080808080808080808080808080808080808080808080",
        "そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,いよく,そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,いよく,そとづら,あまど,おおう,あこがれる,いくぶん,けいけん,あたえる,うめる",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "6b7cd1b2cdfeeef8615077cadd6a0625f417f287652991c80206dbd82db17bf317d5c50a80bd9edd836b39daa1b6973359944c46d3fcc0129198dc7dc5cd0e68",
        bc::wallet::language::ja
    },

    {
        "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
        "われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,われる,らいう",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "a44ba7054ac2f9226929d56505a51e13acdaa8a9097923ca07ea465c4c7e294c038f3f4e7e4b373726ba0057191aced6e48ac8d183f3a11569c426f0de414623",
        bc::wallet::language::ja
    },

    {
        "77c2b00716cec7213839159e404db50d",
        "せまい,うちがわ,あずき,かろう,めずらしい,だんち,ますく,おさめる,ていぼう,あたる,すあな,えしゃく",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "344cef9efc37d0cb36d89def03d09144dd51167923487eec42c487f7428908546fa31a3c26b7391a2b3afe7db81b9f8c5007336b58e269ea0bd10749a87e0193",
        bc::wallet::language::ja
    },

    {
        "b63a9c59a6e641f288ebc103017f1da9f8290b3da6bdef7b",
        "ぬすむ,ふっかつ,うどん,こうりつ,しつじ,りょうり,おたがい,せもたれ,あつめる,いちりゅう,はんしゃ,ごますり,そんけい,たいちょう,らしんばん,ぶんせき,やすみ,ほいく",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "b14e7d35904cb8569af0d6a016cee7066335a21c1c67891b01b83033cadb3e8a034a726e3909139ecd8b2eb9e9b05245684558f329b38480e262c1d6bc20ecc4",
        bc::wallet::language::ja
    },

    {
        "3e141609b97933b66a060dcddc71fad1d91677db872031e85f4c015c5e7e8982",
        "くのう,てぬぐい,そんかい,すろっと,ちきゅう,ほあん,とさか,はくしゅ,ひびく,みえる,そざい,てんすう,たんぴん,くしょう,すいようび,みけん,きさらぎ,げざん,ふくざつ,あつかう,はやい,くろう,おやゆび,こすう",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "32e78dce2aff5db25aa7a4a32b493b5d10b4089923f3320c8b287a77e512455443298351beb3f7eb2390c4662a2e566eec5217e1a37467af43b46668d515e41b",
        bc::wallet::language::ja
    },

    {
        "0460ef47585604c5660618db2e6a7e7f",
        "あみもの,いきおい,ふいうち,にげる,ざんしょ,じかん,ついか,はたん,ほあん,すんぽう,てちがい,わかめ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "0acf902cd391e30f3f5cb0605d72a4c849342f62bd6a360298c7013d714d7e58ddf9c7fdf141d0949f17a2c9c37ced1d8cb2edabab97c4199b142c829850154b",
        bc::wallet::language::ja
    },

    {
        "72f60ebac5dd8add8d2a25a797102c3ce21bc029c200076f",
        "すろっと,にくしみ,なやむ,たとえる,へいこう,すくう,きない,けってい,とくべつ,ねっしん,いたみ,せんせい,おくりがな,まかい,とくい,けあな,いきおい,そそぐ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "9869e220bec09b6f0c0011f46e1f9032b269f096344028f5006a6e69ea5b0b8afabbb6944a23e11ebd021f182dd056d96e4e3657df241ca40babda532d364f73",
        bc::wallet::language::ja
    },

    {
        "2c85efc7f24ee4573d2b81a6ec66cee209b2dcbd09d8eddc51e0215b0b68e416",
        "かほご,きうい,ゆたか,みすえる,もらう,がっこう,よそう,ずっと,ときどき,したうけ,にんか,はっこう,つみき,すうじつ,よけい,くげん,もくてき,まわり,せめる,げざい,にげる,にんたい,たんそく,ほそく",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "713b7e70c9fbc18c831bfd1f03302422822c3727a93a5efb9659bec6ad8d6f2c1b5c8ed8b0b77775feaf606e9d1cc0a84ac416a85514ad59f5541ff5e0382481",
        bc::wallet::language::ja
    },

    {
        "eaebabb2383351fd31d703840b32e9e2",
        "めいえん,さのう,めだつ,すてる,きぬごし,ろんぱ,はんこ,まける,たいおう,さかいし,ねんいり,はぶらし",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "06e1d5289a97bcc95cb4a6360719131a786aba057d8efd603a547bd254261c2a97fcd3e8a4e766d5416437e956b388336d36c7ad2dba4ee6796f0249b10ee961",
        bc::wallet::language::ja
    },

    {
        "7ac45cfe7722ee6c7ba84fbc2d5bd61b45cb2fe5eb65aa78",
        "せんぱい,おしえる,ぐんかん,もらう,きあい,きぼう,やおや,いせえび,のいず,じゅしん,よゆう,きみつ,さといも,ちんもく,ちわわ,しんせいじ,とめる,はちみつ",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "1fef28785d08cbf41d7a20a3a6891043395779ed74503a5652760ee8c24dfe60972105ee71d5168071a35ab7b5bd2f8831f75488078a90f0926c8e9171b2bc4a",
        bc::wallet::language::ja
    },

    {
        "4fa1a8bc3e6d80ee1316050e862c1812031493212b7ec3f3bb1b08f168cabeef",
        "こころ,いどう,きあつ,そうがんきょう,へいあん,せつりつ,ごうせい,はいち,いびき,きこく,あんい,おちつく,きこえる,けんとう,たいこ,すすめる,はっけん,ていど,はんおん,いんさつ,うなぎ,しねま,れいぼう,みつかる",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "43de99b502e152d4c198542624511db3007c8f8f126a30818e856b2d8a20400d29e7a7e3fdd21f909e23be5e3c8d9aee3a739b0b65041ff0b8637276703f65c2",
        bc::wallet::language::ja
    },

    {
        "18ab19a9f54a9274f03e5209a2ac8a91",
        "うりきれ,さいせい,じゆう,むろん,とどける,ぐうたら,はいれつ,ひけつ,いずれ,うちあわせ,おさめる,おたく",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "3d711f075ee44d8b535bb4561ad76d7d5350ea0b1f5d2eac054e869ff7963cdce9581097a477d697a2a9433a0c6884bea10a2193647677977c9820dd0921cbde",
        bc::wallet::language::ja
    },

    {
        "18a2e1d81b8ecfb2a333adcb0c17a5b9eb76cc5d05db91a4",
        "うりきれ,うねる,せっさたくま,きもち,めんきょ,へいたく,たまご,ぜっく,びじゅつかん,さんそ,むせる,せいじ,ねくたい,しはらい,せおう,ねんど,たんまつ,がいけん",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "753ec9e333e616e9471482b4b70a18d413241f1e335c65cd7996f32b66cf95546612c51dcf12ead6f805f9ee3d965846b894ae99b24204954be80810d292fcdd",
        bc::wallet::language::ja
    },

    {
        "15da872c95a13dd738fbf50e427583ad61f18fd99f628c417a61cf8343c90419",
        "うちゅう,ふそく,ひしょ,がちょう,うけもつ,めいそう,みかん,そざい,いばる,うけとる,さんま,さこつ,おうさま,ぱんつ,しひょう,めした,たはつ,いちぶ,つうじょう,てさぎょう,きつね,みすえる,いりぐち,かめれおん",
        "㍍ガバヴァぱばぐゞちぢ十人十色",
        "346b7321d8c04f6f37b49fdf062a2fddc8e1bf8f1d33171b65074531ec546d1d3469974beccb1a09263440fc92e1042580a557fdce314e27ee4eabb25fa5e5fe",
        bc::wallet::language::ja
    }
};

typedef std::vector<std::string> string_list;

const string_list invalid_mnemonic_tests
{
    // Spelling error:
    "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,aboot",

    // Bad lengths:
    "one",
    "one,two",
    "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon",

    // Bad checksum:
    "abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,abandon,one",
};

#endif
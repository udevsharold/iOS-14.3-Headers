/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCVersions, NSString;

@interface NFAWDVersionInfo : NSObject <NFAWDEventProtocol> {

	unsigned _nfccHWVersion;
	unsigned _nfccROMVersion;
	unsigned _nfccFWVersion;
	unsigned _nfccFWRevision;
	unsigned _nfccMWVersion;
	unsigned _nfccHardwareType;
	unsigned _seDeviceType;
	unsigned _seHWVersion;
	unsigned _seFWVersion;
	unsigned _seSignKeyType;
	unsigned _seSeqCount;
	unsigned _seRefCount;
	unsigned _seOSMode;
	unsigned _seRestrictedMode;
	unsigned _seMigrationState;
	unsigned _seMigrationPkgs;
	unsigned _seMigrationInst;
	unsigned _seTransientDeselect;
	unsigned _seTransientReset;
	unsigned _seTransientPersistent;
	unsigned _seAvailableIndices;
	unsigned _seTotalIndices;
	unsigned _seosHWVersion;
	unsigned _seosOSVersion;
	unsigned _seosOSMode;
	unsigned _seosSignKeyType;
	unsigned _seosMigrationState;
	unsigned _seosTransientDeselect;
	unsigned _seosTransientReset;
	unsigned _seosTransientPersistent;
	AWDNFCVersions* _metric;

}

@property (assign,nonatomic) unsigned nfccHWVersion;                        //@synthesize nfccHWVersion=_nfccHWVersion - In the implementation block
@property (assign,nonatomic) unsigned nfccROMVersion;                       //@synthesize nfccROMVersion=_nfccROMVersion - In the implementation block
@property (assign,nonatomic) unsigned nfccFWVersion;                        //@synthesize nfccFWVersion=_nfccFWVersion - In the implementation block
@property (assign,nonatomic) unsigned nfccFWRevision;                       //@synthesize nfccFWRevision=_nfccFWRevision - In the implementation block
@property (assign,nonatomic) unsigned nfccMWVersion;                        //@synthesize nfccMWVersion=_nfccMWVersion - In the implementation block
@property (assign,nonatomic) unsigned nfccHardwareType;                     //@synthesize nfccHardwareType=_nfccHardwareType - In the implementation block
@property (nonatomic,retain) NSString * sePlatformId; 
@property (assign,nonatomic) unsigned seDeviceType;                         //@synthesize seDeviceType=_seDeviceType - In the implementation block
@property (assign,nonatomic) unsigned seHWVersion;                          //@synthesize seHWVersion=_seHWVersion - In the implementation block
@property (assign,nonatomic) unsigned seFWVersion;                          //@synthesize seFWVersion=_seFWVersion - In the implementation block
@property (assign,nonatomic) unsigned seSignKeyType;                        //@synthesize seSignKeyType=_seSignKeyType - In the implementation block
@property (assign,nonatomic) unsigned seSeqCount;                           //@synthesize seSeqCount=_seSeqCount - In the implementation block
@property (assign,nonatomic) unsigned seRefCount;                           //@synthesize seRefCount=_seRefCount - In the implementation block
@property (assign,nonatomic) unsigned seOSMode;                             //@synthesize seOSMode=_seOSMode - In the implementation block
@property (assign,nonatomic) unsigned seRestrictedMode;                     //@synthesize seRestrictedMode=_seRestrictedMode - In the implementation block
@property (assign,nonatomic) unsigned seMigrationState;                     //@synthesize seMigrationState=_seMigrationState - In the implementation block
@property (assign,nonatomic) unsigned seMigrationPkgs;                      //@synthesize seMigrationPkgs=_seMigrationPkgs - In the implementation block
@property (assign,nonatomic) unsigned seMigrationInst;                      //@synthesize seMigrationInst=_seMigrationInst - In the implementation block
@property (assign,nonatomic) unsigned seTransientDeselect;                  //@synthesize seTransientDeselect=_seTransientDeselect - In the implementation block
@property (assign,nonatomic) unsigned seTransientReset;                     //@synthesize seTransientReset=_seTransientReset - In the implementation block
@property (assign,nonatomic) unsigned seTransientPersistent;                //@synthesize seTransientPersistent=_seTransientPersistent - In the implementation block
@property (assign,nonatomic) unsigned seAvailableIndices;                   //@synthesize seAvailableIndices=_seAvailableIndices - In the implementation block
@property (assign,nonatomic) unsigned seTotalIndices;                       //@synthesize seTotalIndices=_seTotalIndices - In the implementation block
@property (nonatomic,retain) NSString * seosPlatformID; 
@property (assign,nonatomic) unsigned seosHWVersion;                        //@synthesize seosHWVersion=_seosHWVersion - In the implementation block
@property (assign,nonatomic) unsigned seosOSVersion;                        //@synthesize seosOSVersion=_seosOSVersion - In the implementation block
@property (assign,nonatomic) unsigned seosOSMode;                           //@synthesize seosOSMode=_seosOSMode - In the implementation block
@property (assign,nonatomic) unsigned seosSignKeyType;                      //@synthesize seosSignKeyType=_seosSignKeyType - In the implementation block
@property (assign,nonatomic) unsigned seosMigrationState;                   //@synthesize seosMigrationState=_seosMigrationState - In the implementation block
@property (assign,nonatomic) unsigned seosTransientDeselect;                //@synthesize seosTransientDeselect=_seosTransientDeselect - In the implementation block
@property (assign,nonatomic) unsigned seosTransientReset;                   //@synthesize seosTransientReset=_seosTransientReset - In the implementation block
@property (assign,nonatomic) unsigned seosTransientPersistent;              //@synthesize seosTransientPersistent=_seosTransientPersistent - In the implementation block
@property (nonatomic,retain) AWDNFCVersions * metric;                       //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)seRefCount;
-(unsigned)seosHWVersion;
-(void)setSeosSignKeyType:(unsigned)arg1 ;
-(void)setSeTransientPersistent:(unsigned)arg1 ;
-(unsigned)seosTransientDeselect;
-(void)setSeRefCount:(unsigned)arg1 ;
-(id)init;
-(unsigned)seTransientDeselect;
-(unsigned)seMigrationPkgs;
-(NSString *)sePlatformId;
-(void)setNfccHardwareType:(unsigned)arg1 ;
-(unsigned)seSeqCount;
-(void)setSeosTransientReset:(unsigned)arg1 ;
-(void)setSeHWVersion:(unsigned)arg1 ;
-(void)setSeosPlatformID:(NSString *)arg1 ;
-(void)setNfccFWRevision:(unsigned)arg1 ;
-(unsigned)seFWVersion;
-(unsigned)seosOSMode;
-(unsigned)seMigrationInst;
-(void)setSePlatformId:(NSString *)arg1 ;
-(void)setSeOSMode:(unsigned)arg1 ;
-(unsigned)nfccHWVersion;
-(unsigned)nfccFWVersion;
-(unsigned)seosOSVersion;
-(void)setSeosOSVersion:(unsigned)arg1 ;
-(void)setSeSignKeyType:(unsigned)arg1 ;
-(unsigned)seDeviceType;
-(unsigned)seosSignKeyType;
-(void)setSeMigrationPkgs:(unsigned)arg1 ;
-(void)setSeosHWVersion:(unsigned)arg1 ;
-(void)setSeSeqCount:(unsigned)arg1 ;
-(void)setNfccFWVersion:(unsigned)arg1 ;
-(void)setSeosTransientPersistent:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCVersions *)arg1 ;
-(unsigned)seSignKeyType;
-(unsigned)seHWVersion;
-(unsigned)seMigrationState;
-(unsigned)seTransientReset;
-(id)getMetric;
-(NSString *)seosPlatformID;
-(unsigned)seosTransientReset;
-(void)setSeTransientReset:(unsigned)arg1 ;
-(unsigned)seRestrictedMode;
-(void)setSeMigrationState:(unsigned)arg1 ;
-(void)setSeTotalIndices:(unsigned)arg1 ;
-(unsigned)nfccROMVersion;
-(void)setSeosOSMode:(unsigned)arg1 ;
-(unsigned)seAvailableIndices;
-(void)setSeRestrictedMode:(unsigned)arg1 ;
-(unsigned)nfccHardwareType;
-(void)setSeAvailableIndices:(unsigned)arg1 ;
-(void)setSeosMigrationState:(unsigned)arg1 ;
-(void)setSeFWVersion:(unsigned)arg1 ;
-(unsigned)seOSMode;
-(unsigned)nfccFWRevision;
-(unsigned)seosTransientPersistent;
-(void)setSeosTransientDeselect:(unsigned)arg1 ;
-(unsigned)seosMigrationState;
-(void)setNfccHWVersion:(unsigned)arg1 ;
-(void)setNfccMWVersion:(unsigned)arg1 ;
-(void)setNfccROMVersion:(unsigned)arg1 ;
-(unsigned)nfccMWVersion;
-(void)setSeMigrationInst:(unsigned)arg1 ;
-(unsigned)seTransientPersistent;
-(void)setSeDeviceType:(unsigned)arg1 ;
-(AWDNFCVersions *)metric;
-(unsigned)getMetricId;
-(unsigned)seTotalIndices;
-(void)setSeTransientDeselect:(unsigned)arg1 ;
@end

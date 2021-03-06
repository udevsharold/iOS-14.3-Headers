/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NWInterfaceSource : NSObject {

	unsigned _ifIndex;
	unsigned long long _srcRef;
	unsigned long long _threshold;

}

@property (assign) unsigned long long srcRef;                 //@synthesize srcRef=_srcRef - In the implementation block
@property (assign) unsigned long long threshold;              //@synthesize threshold=_threshold - In the implementation block
@property (assign) unsigned ifIndex;                          //@synthesize ifIndex=_ifIndex - In the implementation block
-(unsigned long long)threshold;
-(void)setThreshold:(unsigned long long)arg1 ;
-(void)setIfIndex:(unsigned)arg1 ;
-(unsigned long long)srcRef;
-(unsigned)ifIndex;
-(void)setSrcRef:(unsigned long long)arg1 ;
@end


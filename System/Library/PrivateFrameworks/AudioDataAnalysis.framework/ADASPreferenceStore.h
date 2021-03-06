/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioDataAnalysis/AudioDataAnalysis-Structs.h>
@class NSDictionary, NPSDomainAccessor;

@interface ADASPreferenceStore : NSObject {

	os_unfair_lock_s _npsDomainLock;
	NSDictionary* _keyMap;
	NSDictionary* _defaultValues;
	NSDictionary* _specialDarwinKeys;
	NPSDomainAccessor* _coreAudioDomain;
	NPSDomainAccessor* _coreAudioDeviceDomain;

}

@property (nonatomic,readonly) NSDictionary * keyMap;                                //@synthesize keyMap=_keyMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultValues;                         //@synthesize defaultValues=_defaultValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * specialDarwinKeys;                     //@synthesize specialDarwinKeys=_specialDarwinKeys - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDomain;                    //@synthesize coreAudioDomain=_coreAudioDomain - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDeviceDomain;              //@synthesize coreAudioDeviceDomain=_coreAudioDeviceDomain - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)initNPSDomain;
-(NSDictionary *)defaultValues;
-(NPSDomainAccessor *)coreAudioDomain;
-(NSDictionary *)specialDarwinKeys;
-(void)setCoreAudioDeviceDomain:(NPSDomainAccessor *)arg1 ;
-(NSDictionary *)keyMap;
-(void)setCoreAudioDomain:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)coreAudioDeviceDomain;
@end


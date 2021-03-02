/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRVoiceProfileStoreCleaner : NSObject
-(id)_cleanupAppDomain:(id)arg1 ;
-(id)_cleanuplanguageCodePath:(id)arg1 forAppDomain:(id)arg2 ;
-(id)_cleanupOrphanedMetafilesForProfile:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 ;
-(id)_cleanupImplicitUtteranceCacheForProfile:(id)arg1 ;
-(id)_cleanupContentsOfSatFolder:(id)arg1 ;
-(id)_cleanupOrphanedMetafilesAtURL:(id)arg1 ;
-(id)_cleanupPayloadUtterancesFromProfile:(id)arg1 forModelType:(unsigned long long)arg2 exceedingLifeTimeInDays:(long long)arg3 ;
-(id)_cleanupInvalidAudioFiles:(id)arg1 ;
-(void)_cleanupModelFilesAtDir:(id)arg1 forAssetArray:(id)arg2 ;
-(id)filterDuplicatedSiriProfilesFrom:(id)arg1 ;
-(id)filterInvalidSiriProfilesFrom:(id)arg1 ;
-(id)cleanupProfileStore;
-(void)cleanupInvalidModelsForProfile:(id)arg1 withAssetArray:(id)arg2 ;
@end

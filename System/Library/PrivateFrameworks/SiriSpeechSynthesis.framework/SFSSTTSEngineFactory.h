/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject {

	NSMutableDictionary* _keyToTTSEngineMap;

}

@property (nonatomic,retain) NSMutableDictionary * keyToTTSEngineMap;              //@synthesize keyToTTSEngineMap=_keyToTTSEngineMap - In the implementation block
+(id)sharedInstance;
+(id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(id)init;
-(id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(NSMutableDictionary *)keyToTTSEngineMap;
-(void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(void)removeAllEngines;
-(void)setKeyToTTSEngineMap:(NSMutableDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {

	NSURL* _destinationWaveformURL;

}

@property (nonatomic,readonly) NSURL * destinationWaveformURL;              //@synthesize destinationWaveformURL=_destinationWaveformURL - In the implementation block
-(NSURL *)destinationWaveformURL;
-(BOOL)preferLoadingFragmentWaveforms;
-(id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 ;
-(id)generatedWaveformOutputURL;
@end

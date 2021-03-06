/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKTranscriptionResult : NSObject {

	NSString* _transcription;
	BOOL _didShowHUD;

}

@property (nonatomic,copy,readonly) NSString * transcription;              //@synthesize transcription=_transcription - In the implementation block
@property (nonatomic,readonly) BOOL didShowHUD;                            //@synthesize didShowHUD=_didShowHUD - In the implementation block
-(NSString *)transcription;
-(BOOL)didShowHUD;
-(id)initWithTranscription:(id)arg1 didShowHUD:(BOOL)arg2 ;
@end


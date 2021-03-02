/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CACVoiceOverAnnouncement : NSObject {

	NSString* _message;
	long long _type;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id completion;                   //@synthesize completion=_completion - In the implementation block
-(NSString *)message;
-(id)completion;
-(long long)type;
-(id)initWithMessage:(id)arg1 type:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

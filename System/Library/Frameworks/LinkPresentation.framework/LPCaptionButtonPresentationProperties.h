/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPCaptionButtonPresentationProperties : NSObject {

	NSString* _text;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id callback;                  //@synthesize callback=_callback - In the implementation block
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

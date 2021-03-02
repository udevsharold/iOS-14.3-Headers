/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ENNoteContent : NSObject {

	NSString* _emml;

}

@property (nonatomic,copy) NSString * emml;              //@synthesize emml=_emml - In the implementation block
+(id)noteContentWithString:(id)arg1 ;
+(id)noteContentWithContentArray:(id)arg1 ;
+(id)noteContentWithSanitizedHTML:(id)arg1 ;
+(id)noteContentWithENML:(id)arg1 ;
-(id)enml;
-(NSString *)emml;
-(id)enmlWithNote:(id)arg1 ;
-(id)initWithENML:(id)arg1 ;
-(void)setEmml:(NSString *)arg1 ;
@end

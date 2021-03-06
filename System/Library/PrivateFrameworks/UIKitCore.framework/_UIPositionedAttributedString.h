/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, UITextPosition;

@interface _UIPositionedAttributedString : NSObject {

	NSAttributedString* _string;
	UITextPosition* _position;

}

@property (nonatomic,copy,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) UITextPosition * position;                     //@synthesize position=_position - In the implementation block
+(id)attributedString:(id)arg1 atPosition:(id)arg2 ;
-(NSAttributedString *)string;
-(id)description;
-(UITextPosition *)position;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextPosition.h>

@interface WKTextPosition : UITextPosition {

	CGRect _positionRect;

}

@property (assign,nonatomic) CGRect positionRect;              //@synthesize positionRect=_positionRect - In the implementation block
+(id)textPositionWithRect:(CGRect)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPositionRect:(CGRect)arg1 ;
-(CGRect)positionRect;
@end


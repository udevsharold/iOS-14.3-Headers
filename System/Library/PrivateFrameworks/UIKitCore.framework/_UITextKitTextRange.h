/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextRange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {

	_UITextKitTextPosition* _start;
	_UITextKitTextPosition* _end;

}

@property (nonatomic,retain) UITextPosition * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long affinity; 
+(id)rangeWithRange:(NSRange)arg1 affinity:(long long)arg2 ;
+(id)rangeWithRange:(NSRange)arg1 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
+(id)defaultRange;
-(long long)affinity;
-(BOOL)isEmpty;
-(id)init;
-(void)setStart:(UITextPosition *)arg1 ;
-(void)setEnd:(UITextPosition *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)asRange;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(UITextPosition *)start;
-(UITextPosition *)end;
@end


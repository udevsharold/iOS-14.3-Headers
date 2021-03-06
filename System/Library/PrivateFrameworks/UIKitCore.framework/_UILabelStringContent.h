/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILabelContent.h>

@class NSString;

@interface _UILabelStringContent : _UILabelContent {

	NSString* _string;
	SCD_Struct_UI34 _flags;

}
-(BOOL)isEqualToString:(id)arg1 ;
-(long long)length;
-(id)string;
-(id)attributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isContentEqualToContent:(id)arg1 ;
-(id)attributedStringContent;
-(unsigned long long)hash;
-(BOOL)isAttributed;
-(BOOL)isWidthVariant;
-(id)contentWithString:(id)arg1 ;
-(id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(NSRange)arg3 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)contentWithAttributedString:(id)arg1 ;
-(id)initWithString:(id)arg1 defaultAttributes:(id)arg2 ;
-(BOOL)isNil;
@end


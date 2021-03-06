/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIImage;

@interface _UIImageTextAttachment : NSTextAttachment {

	UIImage* _image;
	CGRect _bounds;
	SCD_Struct_UI34 _flags;

}
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)_deriveAttribute:(id)arg1 inStorage:(id)arg2 atIndex:(long long)arg3 ;
-(id)_imageAdaptedForTextAtIndex:(long long)arg1 inContainer:(id)arg2 sizeOnly:(BOOL)arg3 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setImage:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_initWithImage:(id)arg1 ;
@end


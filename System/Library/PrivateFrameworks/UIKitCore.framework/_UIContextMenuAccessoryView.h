/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView {

	unsigned long long _location;
	unsigned long long _trackingAxis;
	CGPoint _offset;
	SCD_Struct_UI3 _anchor;

}

@property (assign,nonatomic) unsigned long long location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI3 anchor;                        //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) CGPoint offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long trackingAxis;              //@synthesize trackingAxis=_trackingAxis - In the implementation block
-(SCD_Struct_UI3)anchor;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(unsigned long long)location;
-(void)setAnchor:(SCD_Struct_UI3)arg1 ;
-(unsigned long long)trackingAxis;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(SCD_Struct_UI102)arg2 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTrackingAxis:(unsigned long long)arg1 ;
@end


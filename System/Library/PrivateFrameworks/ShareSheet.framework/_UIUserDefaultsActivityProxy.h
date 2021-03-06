/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding> {

	BOOL _canEdit;
	BOOL _canMove;
	BOOL _canHide;
	BOOL _isHidden;
	NSUUID* _activityUUID;
	NSNumber* _imageSlot;
	NSNumber* _labelSlot;
	double _platterTextHeight;

}

@property (nonatomic,retain) NSUUID * activityUUID;                 //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * imageSlot;                  //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) NSNumber * labelSlot;                  //@synthesize labelSlot=_labelSlot - In the implementation block
@property (assign,nonatomic) BOOL canEdit;                          //@synthesize canEdit=_canEdit - In the implementation block
@property (assign,nonatomic) BOOL canMove;                          //@synthesize canMove=_canMove - In the implementation block
@property (assign,nonatomic) BOOL canHide;                          //@synthesize canHide=_canHide - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                         //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) double platterTextHeight;              //@synthesize platterTextHeight=_platterTextHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSUUID *)activityUUID;
-(void)setCanEdit:(BOOL)arg1 ;
-(double)platterTextHeight;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(void)setLabelSlot:(NSNumber *)arg1 ;
-(void)setCanMove:(BOOL)arg1 ;
-(void)setCanHide:(BOOL)arg1 ;
-(void)setPlatterTextHeight:(double)arg1 ;
-(BOOL)canHide;
-(BOOL)canMove;
-(BOOL)canEdit;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(NSNumber *)imageSlot;
-(NSNumber *)labelSlot;
-(void)encodeWithCoder:(id)arg1 ;
@end


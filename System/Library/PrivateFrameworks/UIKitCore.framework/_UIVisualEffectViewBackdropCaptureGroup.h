/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	NSString* _groupNamespace;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * groupNamespace;                   //@synthesize groupNamespace=_groupNamespace - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(double)minimumScale;
-(double)scale;
-(id)init;
-(NSString *)groupName;
-(BOOL)disableInPlaceFiltering;
-(id)initWithName:(id)arg1 scale:(double)arg2 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(id)description;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(id)initWithBackdrop:(id)arg1 ;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)setGroupNamespace:(NSString *)arg1 ;
-(NSString *)groupNamespace;
-(void)updateAllBackdropViews;
-(void)applyScaleHint:(double)arg1 ;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(BOOL)allowInPlaceFiltering;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setMinimumScale:(double)arg1 ;
-(void)setScale:(double)arg1 ;
@end

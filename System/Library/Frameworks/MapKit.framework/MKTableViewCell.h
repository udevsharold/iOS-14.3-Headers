/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@interface MKTableViewCell : UITableViewCell {

	BOOL __mapkit_separatorStyleOverrideEnabled;
	BOOL __mapkit_forceSeparatorFrameToCGRectZero;
	long long __mapkit_separatorStyleOverride;

}

@property (assign,nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero;              //@synthesize _mapkit_forceSeparatorFrameToCGRectZero=__mapkit_forceSeparatorFrameToCGRectZero - In the implementation block
@property (assign,nonatomic) long long _mapkit_separatorStyleOverride;                  //@synthesize _mapkit_separatorStyleOverride=__mapkit_separatorStyleOverride - In the implementation block
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGRect)_separatorFrame;
-(void)set_mapkit_forceSeparatorFrameToCGRectZero:(BOOL)arg1 ;
-(void)_mapkit_disableSeparatorStyleOverride;
-(long long)_mapkit_separatorStyleOverride;
-(BOOL)_mapkit_forceSeparatorFrameToCGRectZero;
-(void)set_mapkit_separatorStyleOverride:(long long)arg1 ;
@end

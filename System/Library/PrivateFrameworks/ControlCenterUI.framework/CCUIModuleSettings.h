/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIModuleSettings : NSObject <NSCopying> {

	CCUILayoutSize _portraitLayoutSize;
	CCUILayoutSize _landscapeLayoutSize;
	BOOL _portraitDoubleMargin;
	BOOL _landscapeDoubleMargin;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPortraitLayoutSize:(CCUILayoutSize)arg1 landscapeLayoutSize:(CCUILayoutSize)arg2 portraitDoubleMargin:(BOOL)arg3 landscapeDoubleMargin:(BOOL)arg4 ;
-(id)initWithPortraitLayoutSize:(CCUILayoutSize)arg1 landscapeLayoutSize:(CCUILayoutSize)arg2 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1 ;
-(BOOL)doubleMarginForInterfaceOrientation:(long long)arg1 ;
@end


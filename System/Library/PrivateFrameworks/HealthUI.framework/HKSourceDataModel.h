/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSource, UIImage, NSDictionary;

@interface HKSourceDataModel : NSObject <NSCopying> {

	BOOL _installed;
	HKSource* _source;
	UIImage* _icon;
	NSDictionary* _purposeStrings;

}

@property (nonatomic,copy,readonly) HKSource * source;              //@synthesize source=_source - In the implementation block
@property (assign) BOOL installed;                                  //@synthesize installed=_installed - In the implementation block
@property (retain) UIImage * icon;                                  //@synthesize icon=_icon - In the implementation block
@property (copy) NSDictionary * purposeStrings;                     //@synthesize purposeStrings=_purposeStrings - In the implementation block
-(id)initWithSource:(id)arg1 ;
-(BOOL)installed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)icon;
-(unsigned long long)hash;
-(void)setIcon:(UIImage *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setPurposeStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)purposeStrings;
@end

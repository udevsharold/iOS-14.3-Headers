/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSSizes;

@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding> {

	TPSSizes* _tip;
	TPSSizes* _tipIntro;
	TPSSizes* _collectionFeatured;

}

@property (nonatomic,retain) TPSSizes * tip;                             //@synthesize tip=_tip - In the implementation block
@property (nonatomic,retain) TPSSizes * tipIntro;                        //@synthesize tipIntro=_tipIntro - In the implementation block
@property (nonatomic,retain) TPSSizes * collectionFeatured;              //@synthesize collectionFeatured=_collectionFeatured - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSSizes *)tip;
-(void)setTip:(TPSSizes *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(TPSSizes *)tipIntro;
-(id)debugDescription;
-(void)setTipIntro:(TPSSizes *)arg1 ;
-(TPSSizes *)collectionFeatured;
-(void)setCollectionFeatured:(TPSSizes *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

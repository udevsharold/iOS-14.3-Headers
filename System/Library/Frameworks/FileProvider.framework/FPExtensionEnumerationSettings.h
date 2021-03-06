/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPEnumerationSettings.h>

@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings {

	BOOL _presenterEnumeration;
	BOOL _wantsDirectExtensionEnumeration;
	BOOL _wantsTrashEnumeration;
	FPItemID* _enumeratedItemID;

}

@property (nonatomic,copy) FPItemID * enumeratedItemID;                                            //@synthesize enumeratedItemID=_enumeratedItemID - In the implementation block
@property (assign,getter=isPresenterEnumeration,nonatomic) BOOL presenterEnumeration;              //@synthesize presenterEnumeration=_presenterEnumeration - In the implementation block
@property (assign,nonatomic) BOOL wantsDirectExtensionEnumeration;                                 //@synthesize wantsDirectExtensionEnumeration=_wantsDirectExtensionEnumeration - In the implementation block
@property (assign,nonatomic) BOOL wantsTrashEnumeration;                                           //@synthesize wantsTrashEnumeration=_wantsTrashEnumeration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FPItemID *)enumeratedItemID;
-(BOOL)wantsTrashEnumeration;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnumeratedItemID:(FPItemID *)arg1 ;
-(BOOL)isPresenterEnumeration;
-(void)setPresenterEnumeration:(BOOL)arg1 ;
-(BOOL)wantsDirectExtensionEnumeration;
-(void)setWantsDirectExtensionEnumeration:(BOOL)arg1 ;
-(void)setWantsTrashEnumeration:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


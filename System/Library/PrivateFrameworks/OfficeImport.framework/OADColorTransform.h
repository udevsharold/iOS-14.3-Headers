/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADColorTransform : NSObject <NSCopying> {

	int mType;

}
+(id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2 ;
+(float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2 ;
+(float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2 ;
+(id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2 ;
+(id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(BOOL)arg3 ;
+(id)applyHSLTransform:(id)arg1 toColor:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
@end


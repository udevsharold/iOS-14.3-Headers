/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {

	int mIndex;
	NSString* mName;
	NSMutableArray* mEffects;
	OADBlip* mBlip;

}
+(id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 ;
+(int)blipTypeForContentType:(id)arg1 ;
+(int)blipTypeForExtension:(id)arg1 ;
+(int)blipTypeForImageData:(id)arg1 ;
+(id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
+(id)inflatedExtensionForGzippedExtension:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setIndex:(int)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)blip;
-(int)index;
-(BOOL)isNull;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(unsigned long long)effectCount;
-(id)effects;
-(void)addEffect:(id)arg1 ;
-(void)setEffects:(id)arg1 ;
-(id)effectAtIndex:(unsigned long long)arg1 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4 ;
-(void)setBlip:(id)arg1 ;
-(void)removeEffectAtIndex:(unsigned long long)arg1 ;
@end

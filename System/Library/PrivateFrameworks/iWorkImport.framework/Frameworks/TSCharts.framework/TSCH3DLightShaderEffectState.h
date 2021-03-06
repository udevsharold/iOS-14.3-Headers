/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TSCH3DLightShaderEffectState : NSObject <NSCopying> {

	NSMutableArray* mLights;
	LightingPackageShaderEffectState mPackageState;

}
+(id)effectState;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(const LightingPackageShaderEffectState*)packageState;
-(void)setPackageState:(const LightingPackageShaderEffectState*)arg1 ;
@end


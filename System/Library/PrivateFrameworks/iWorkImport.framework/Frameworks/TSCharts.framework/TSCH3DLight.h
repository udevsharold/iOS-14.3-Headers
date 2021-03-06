/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSCH3DVector;

@interface TSCH3DLight : NSObject <NSCopying> {

	NSString* _name;
	TSCH3DVector* _ambientColor;
	TSCH3DVector* _diffuseColor;
	TSCH3DVector* _specularColor;
	float _intensity;
	TSCH3DVector* _attenuation;
	int _coordinateSpace;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) tvec4<float> ambientColor; 
@property (assign,nonatomic) tvec4<float> diffuseColor; 
@property (assign,nonatomic) tvec4<float> specularColor; 
@property (assign,nonatomic) float intensity;                         //@synthesize intensity=_intensity - In the implementation block
@property (assign,nonatomic) tvec3<float> attenuation; 
@property (assign,nonatomic) int coordinateSpace;                     //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
+(id)light;
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(id)lightClasses;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(void)setCoordinateSpace:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(int)coordinateSpace;
-(void)dealloc;
-(void)setIntensity:(float)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(float)intensity;
-(void)setEnabled:(BOOL)arg1 ;
-(tvec4<float>)ambientColor;
-(void)setAmbientColor:(tvec4<float>)arg1 ;
-(void)setDiffuseColor:(tvec4<float>)arg1 ;
-(void)setSpecularColor:(tvec4<float>)arg1 ;
-(tvec4<float>)diffuseColor;
-(tvec4<float>)specularColor;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(tvec3<float>)attenuation;
-(void)setAttenuation:(tvec3<float>)arg1 ;
-(void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3 ;
-(id)initWithLightArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToLightArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRasterizationRateMapSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI> {

	id<MTLDevice> _device;
	NSString* _label;
	SCD_Struct_MT31 _dim;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) SCD_Struct_MT31 screenSize; 
@property (readonly) unsigned long long layerCount; 
@property (readonly) SCD_Struct_MT31 physicalGranularity; 
@property (readonly) SCD_Struct_MT34 parameterBufferSizeAndAlign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(SCD_Struct_MT31)screenSize;
-(id)init;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id<MTLDevice>)device;
-(void)copyParameterDataToBuffer:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)physicalCoordinate:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)screenCoordinate:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT31)physicalGranularity;
-(SCD_Struct_MT34)parameterBufferSizeAndAlign;
-(SCD_Struct_MT31)physicalSizeForLayer:(unsigned long long)arg1 ;
-(SCD_Struct_MT35)mapScreenToPhysicalCoordinates:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(SCD_Struct_MT35)mapPhysicalToScreenCoordinates:(SCD_Struct_MT35)arg1 forLayer:(unsigned long long)arg2 ;
-(NSString *)description;
-(unsigned long long)layerCount;
-(NSString *)label;
@end

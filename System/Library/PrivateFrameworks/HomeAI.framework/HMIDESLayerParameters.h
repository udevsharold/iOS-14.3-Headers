/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMIDESMutableFloatArray;

@interface HMIDESLayerParameters : HMFObject {

	NSString* _name;
	HMIDESMutableFloatArray* _weights;
	HMIDESMutableFloatArray* _biases;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) HMIDESMutableFloatArray * weights;              //@synthesize weights=_weights - In the implementation block
@property (readonly) HMIDESMutableFloatArray * biases;               //@synthesize biases=_biases - In the implementation block
-(HMIDESMutableFloatArray *)weights;
-(HMIDESMutableFloatArray *)biases;
-(NSString *)name;
-(id)initWithName:(id)arg1 weights:(id)arg2 biases:(id)arg3 ;
@end


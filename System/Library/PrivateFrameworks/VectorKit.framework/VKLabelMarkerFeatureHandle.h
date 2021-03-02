/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKLabelMarkerFeatureHandle : NSObject {

	LabelMarkerFeatureHandle _actualHandle;

}
-(id)styleAttributes;
-(int)tileX;
-(int)tileY;
-(int)tileZ;
-(int)featureType;
-(void)dealloc;
-(long long)featureIndex;
-(id)initWithLabelMarkerHandle:(const LabelMarkerFeatureHandle*)arg1 ;
-(const LabelMarkerFeatureHandle*)actualHandle;
-(unsigned)tileVersion;
-(int)tileStyle;
@end

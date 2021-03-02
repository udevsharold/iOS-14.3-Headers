/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(id)clusterStyleAttributes;
-(unsigned char)sceneState;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(BOOL)isClusteringEnabled;
-(unsigned char)sceneID;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;

@end

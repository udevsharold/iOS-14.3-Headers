/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKURLSerializer : NSObject
+(id)stringForMapType:(unsigned long long)arg1 ;
+(id)stringForDirectionsType:(unsigned long long)arg1 ;
-(id)mapItemsFromUrl:(id)arg1 options:(id*)arg2 ;
-(id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4 ;
-(id)urlForOpeningMapItems:(id)arg1 options:(id)arg2 ;
@end

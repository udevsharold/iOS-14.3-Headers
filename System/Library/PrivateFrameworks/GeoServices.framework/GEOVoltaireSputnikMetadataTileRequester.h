/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@interface GEOVoltaireSputnikMetadataTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>
+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE91)kindForTileKey:(const GEOTileKey*)arg1 ;
@end

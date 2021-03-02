/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate <NSObject>
@optional
-(void)proxyDidDownloadRegionalResources:(id)arg1;

@required
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
-(void)proxyDidDeleteExternalTileData:(id)arg1;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;

@end

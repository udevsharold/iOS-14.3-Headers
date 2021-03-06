/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageRequestBehaviorSpec : NSObject {

	BOOL _synchronous;
	BOOL _networkAccessAllowed;
	BOOL _allowPlaceholder;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	BOOL _includeHDRGainMap;
	BOOL _includeHDRGainMapInIntermediateImage;
	BOOL _useLowMemoryMode;
	BOOL _useLimitedLibraryMode;
	long long _choosingPolicy;
	unsigned long long _loadingOptions;
	long long _version;
	long long _resizeMode;
	double _minimumTableThumbnailLongSide;
	long long _downloadIntent;

}

@property (assign,nonatomic) long long choosingPolicy;                                             //@synthesize choosingPolicy=_choosingPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long loadingOptions;                                    //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMap;                                               //@synthesize includeHDRGainMap=_includeHDRGainMap - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMapInIntermediateImage;                            //@synthesize includeHDRGainMapInIntermediateImage=_includeHDRGainMapInIntermediateImage - In the implementation block
@property (assign,nonatomic) double minimumTableThumbnailLongSide;                                 //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
@property (assign,nonatomic) BOOL useLowMemoryMode;                                                //@synthesize useLowMemoryMode=_useLowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL useLimitedLibraryMode;                                           //@synthesize useLimitedLibraryMode=_useLimitedLibraryMode - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
+(unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1 ;
-(BOOL)isSynchronous;
-(long long)choosingPolicy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)useLowMemoryMode;
-(double)minimumTableThumbnailLongSide;
-(BOOL)shouldLoadImage;
-(long long)resizeMode;
-(void)setMinimumTableThumbnailLongSide:(double)arg1 ;
-(long long)downloadIntent;
-(void)setUseLimitedLibraryMode:(BOOL)arg1 ;
-(unsigned long long)loadingOptions;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)includeHDRGainMap;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(void)setIncludeHDRGainMap:(BOOL)arg1 ;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(BOOL)shouldLoadDataOrURL;
-(id)description;
-(BOOL)isNetworkAccessAllowed;
-(void)setLoadingOptions:(unsigned long long)arg1 ;
-(void)setUseLowMemoryMode:(BOOL)arg1 ;
-(BOOL)includeHDRGainMapInIntermediateImage;
-(BOOL)shouldLoadData;
-(BOOL)allowPlaceholder;
-(long long)version;
-(void)setDownloadIntent:(long long)arg1 ;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(BOOL)shouldLoadURL;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(id)shortDescription;
-(BOOL)useLimitedLibraryMode;
-(void)setIncludeHDRGainMapInIntermediateImage:(BOOL)arg1 ;
-(void)setChoosingPolicy:(long long)arg1 ;
@end


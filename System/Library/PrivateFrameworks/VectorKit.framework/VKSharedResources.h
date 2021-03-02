/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class VKInternalIconManager, VKResourceManager, NSString;

@interface VKSharedResources : NSObject <GEOResourceManifestTileGroupObserver> {

	retain_ptr<VKInternalIconManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>* _iconManager;
	shared_ptr<md::TextureManager>* _textureManager;
	retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>* _resourceManager;
	shared_ptr<md::StylesheetVendor>* _stylesheetVendor;
	shared_ptr<md::DataOverrideManager>* _dataOverrideManager;
	shared_ptr<md::StandardCommandBufferSelector>* _standardCommandBufferSelector;
	shared_ptr<md::RealisticCommandBufferSelector>* _realisticCommandBufferSelector;
	unique_ptr<md::Device, std::__1::default_delete<md::Device> >* _device;
	unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas> >* _alphaAtlas;
	unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> >* _highInflationAlphaAtlas;
	unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> >* _isoAlphaAtlas;
	unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas> >* _distanceAtlas;
	shared_ptr<ggl::StandardLibrary>* _shaderLibrary;
	FigPhotoDecompressionSessionRef _defaultDecompressionSession;
	read_write_lock _figCreationLock;
	shared_ptr<md::GeoResourceProvider>* _resourceProvider;
	shared_ptr<grl::IconManager>* _grlIconManager;
	shared_ptr<grl::FontManager>* _grlFontManager;
	unsigned _referenceCount;
	BOOL _snapshotterIsInService;

}

@property (nonatomic,readonly) VKInternalIconManager * iconManager; 
@property (nonatomic,readonly) shared_ptr<md::TextureManager>* textureManager; 
@property (nonatomic,readonly) VKResourceManager * resourceManager; 
@property (nonatomic,readonly) shared_ptr<md::StylesheetVendor>* stylesheetVendor;                                          //@synthesize stylesheetVendor=_stylesheetVendor - In the implementation block
@property (nonatomic,readonly) Device* device; 
@property (nonatomic,readonly) Device* gglDevice; 
@property (nonatomic,readonly) shared_ptr<md::StandardCommandBufferSelector>* standardCommandBufferSelector; 
@property (nonatomic,readonly) shared_ptr<md::RealisticCommandBufferSelector>* realisticCommandBufferSelector; 
@property (nonatomic,readonly) AlphaAtlas* alphaAtlas; 
@property (nonatomic,readonly) IsoAlphaAtlas* highInflationAlphaAtlas; 
@property (nonatomic,readonly) IsoAlphaAtlas* isoAlphaAtlas; 
@property (nonatomic,readonly) DistanceAtlas* distanceAtlas; 
@property (nonatomic,readonly) const StandardLibrary* shaderLibrary; 
@property (nonatomic,readonly) IconManager* grlIconManager; 
@property (nonatomic,readonly) shared_ptr<grl::FontManager>* grlFontManager; 
@property (nonatomic,readonly) FigPhotoDecompressionSessionRef defaultDecompressionSession; 
@property (assign,nonatomic) BOOL snapshotterIsInService;                                                                   //@synthesize snapshotterIsInService=_snapshotterIsInService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)purge;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(VKResourceManager *)resourceManager;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(VKInternalIconManager *)iconManager;
-(BOOL)_hasResourceUsers;
-(IsoAlphaAtlas*)highInflationAlphaAtlas;
-(shared_ptr<md::StandardCommandBufferSelector>*)standardCommandBufferSelector;
-(DistanceAtlas*)distanceAtlas;
-(shared_ptr<md::StylesheetVendor>*)stylesheetVendor;
-(shared_ptr<md::RealisticCommandBufferSelector>*)realisticCommandBufferSelector;
-(void)dealloc;
-(const shared_ptr<md::DataOverrideManager>*)dataOverrideManager;
-(IsoAlphaAtlas*)isoAlphaAtlas;
-(IconManager*)grlIconManager;
-(Device*)device;
-(shared_ptr<md::TextureManager>*)textureManager;
-(AlphaAtlas*)alphaAtlas;
-(void)startDecompressionSession;
-(void)_addResourceUser;
-(id)_initWithDevice:(Device*)arg1 standardLibrary:(const shared_ptr<ggl::StandardLibrary>*)arg2 ;
-(const StandardLibrary*)shaderLibrary;
-(void)_removeResourceUser;
-(void)purgeDecompressSessionCachedBuffers;
-(void)setSnapshotterIsInService:(BOOL)arg1 ;
-(shared_ptr<grl::FontManager>*)grlFontManager;
-(Device*)gglDevice;
-(BOOL)snapshotterIsInService;
-(FigPhotoDecompressionSessionRef)defaultDecompressionSession;
@end

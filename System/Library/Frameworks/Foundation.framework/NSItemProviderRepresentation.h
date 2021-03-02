/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSItemProviderRepresentation : NSObject {

	/*^block*/id _loader;
	NSString* _typeIdentifier;
	long long _visibility;
	long long _preferredRepresentation;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;               //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                           //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) long long preferredRepresentation;              //@synthesize preferredRepresentation=_preferredRepresentation - In the implementation block
-(long long)visibility;
-(id)loadOpenInPlaceWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLoaderBlock:(/*^block*/id)arg1 ;
-(void)setPreferredRepresentation:(long long)arg1 ;
-(NSString *)typeIdentifier;
-(id)loadOpenInPlaceWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVisibility:(long long)arg1 ;
-(void)dealloc;
-(id)loadDataWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadFileCopyWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadWithOptions_v2:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)copyWithDoNothingLoaderBlock;
-(id)_loadWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(long long)preferredRepresentation;
-(void)setLoaderBlock_v2:(/*^block*/id)arg1 ;
-(id)loadWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadFileCopyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)performProgressTrackingWithLoaderBlock:(/*^block*/id)arg1 onCancelCallback:(/*^block*/id)arg2 ;
@end

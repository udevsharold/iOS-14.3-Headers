/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INImageStoring.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring> {

	INImageBundle* _imageBundle;
	NSArray* __supportedClasses;

}

@property (setter=_setSupportedClasses:,nonatomic,copy) NSArray * _supportedClasses;              //@synthesize _supportedClasses=__supportedClasses - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceIdentifier;
-(id)init;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeExpiredImagesInEphemeralStore;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(unsigned long long)servicePriority;
-(NSArray *)_supportedClasses;
-(id)_filePathForImageWithFileName:(id)arg1 ;
-(id)_deleteItemAtFilePath:(id)arg1 ;
-(void)_setSupportedClasses:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject {

	PLAppPrivateData* _impl;
	PHPhotoLibrary* _photoLibrary;

}

@property (retain) PLAppPrivateData * impl;                    //@synthesize impl=_impl - In the implementation block
@property (__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setImpl:(PLAppPrivateData *)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(PLAppPrivateData *)impl;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)debugDescription;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)invalidate;
-(void)_handleWriteException:(id)arg1 ;
@end

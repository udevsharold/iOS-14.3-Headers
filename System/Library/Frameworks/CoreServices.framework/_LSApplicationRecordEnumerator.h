/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSRecordEnumerator.h>

@class NSURL;

@interface _LSApplicationRecordEnumerator : _LSRecordEnumerator {

	NSURL* _volumeURL;
	unsigned long long _options;
	vector<unsigned int, std::__1::allocator<unsigned int> >* _bundleIdentifiersOrUnits;
	unsigned _container;
	unsigned _bundleClass;

}

@property (assign) unsigned bundleClass;              //@synthesize bundleClass=_bundleClass - In the implementation block
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
-(void)setBundleClass:(unsigned)arg1 ;
-(unsigned)bundleClass;
-(id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_evaluateBundleNoIO:(unsigned)arg1 data:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
-(id)_applicationRecordWithContext:(LSContext*)arg1 bundleIdentifierOrUnit:(unsigned)arg2 ;
-(BOOL)_getContainer:(unsigned*)arg1 context:(LSContext*)arg2 error:(id*)arg3 ;
@end

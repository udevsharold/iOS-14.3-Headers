/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject {

	NSMutableDictionary* _userDictionaryCache;

}

@property (nonatomic,readonly) NSSet * excludedFilenamesWorthWarningAtLogout; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)defaultExcludedExtensionsWorthPreserving;
+(id)defaultExcludedFilenamesWorthPreserving;
+(id)sharedDefaults;
-(long long)minFileSizeForThumbnailTransfer;
-(id)init;
-(id)_init;
-(NSSet *)excludedFilenamesWorthWarningAtLogout;
-(NSSet *)excludedExtensionsWorthPreserving;
@end


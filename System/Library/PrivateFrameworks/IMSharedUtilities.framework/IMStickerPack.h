/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSURL, NSSet;

@interface IMStickerPack : NSObject {

	NSMutableSet* _stickers;
	NSString* _GUID;
	NSString* _name;
	NSURL* _displayAssetURL;
	NSURL* _fileURL;
	NSString* _appBundleIdentifier;
	NSString* _appVersion;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                  //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSSet * stickers; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * displayAssetURL;                     //@synthesize displayAssetURL=_displayAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                       //@synthesize appVersion=_appVersion - In the implementation block
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)appVersion;
-(void)setName:(NSString *)arg1 ;
-(void)addSticker:(id)arg1 ;
-(id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3 ;
-(NSURL *)displayAssetURL;
-(void)setDisplayAssetURL:(NSURL *)arg1 ;
-(id)initWithGUID:(id)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6 ;
-(id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4 ;
-(void)dealloc;
-(NSURL *)fileURL;
-(NSString *)GUID;
-(id)description;
-(NSString *)appBundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setGUID:(NSString *)arg1 ;
-(NSSet *)stickers;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
@end

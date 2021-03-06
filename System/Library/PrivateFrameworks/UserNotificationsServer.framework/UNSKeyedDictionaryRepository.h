/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDictionaryRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;

}
-(void)removeDictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)_removeDictionaryAtPath:(id)arg1 ;
-(BOOL)_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)allKeys;
-(id)_dictionaryAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 ;
-(id)_pathForKey:(id)arg1 ;
@end


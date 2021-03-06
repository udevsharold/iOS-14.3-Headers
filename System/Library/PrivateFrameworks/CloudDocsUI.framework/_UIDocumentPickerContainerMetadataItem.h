/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	NSURL* _cachedURL;
	NSURL* _cachedURLInLocalContainer;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	NSNumber* _cachedFileObjectID;
	BOOL _cachedRenameable;

}
-(id)subtitle2;
-(id)modificationDate;
-(id)subtitle;
-(id)contentType;
-(unsigned long long)hash;
-(unsigned long long)indentationLevel;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)tags;
-(id)initWithMetadataItem:(id)arg1 ;
-(id)title;
-(id)url;
-(BOOL)renameable;
-(id)urlInLocalContainer;
-(void)cacheValues:(id)arg1 ;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
@end


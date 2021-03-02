/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class DEDBugSession, NSString, NSURL, NSArray, DEDExtensionIdentifier;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving> {

	DEDBugSession* _fromBugSession;
	NSString* _deviceID;
	NSURL* _rootURL;
	NSString* _displayName;
	NSString* _extensionID;
	NSArray* _attachmentItems;
	DEDExtensionIdentifier* _dedExtensionIdentifier;

}

@property (nonatomic,retain) DEDExtensionIdentifier * dedExtensionIdentifier;              //@synthesize dedExtensionIdentifier=_dedExtensionIdentifier - In the implementation block
@property (retain) DEDBugSession * fromBugSession;                                         //@synthesize fromBugSession=_fromBugSession - In the implementation block
@property (retain) NSString * deviceID;                                                    //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSURL * rootURL;                                                        //@synthesize rootURL=_rootURL - In the implementation block
@property (retain) NSString * displayName;                                                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * extensionID;                                                 //@synthesize extensionID=_extensionID - In the implementation block
@property (retain) NSArray * attachmentItems;                                              //@synthesize attachmentItems=_attachmentItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)groupWithDictionary:(id)arg1 ;
+(id)groupWithDEGroup:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isLocal;
-(id)serialize;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setExtensionID:(NSString *)arg1 ;
-(void)setRootURL:(NSURL *)arg1 ;
-(id)archiveName;
-(NSString *)extensionID;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)rootURL;
-(NSString *)description;
-(NSString *)deviceID;
-(void)setAttachmentItems:(NSArray *)arg1 ;
-(NSArray *)attachmentItems;
-(NSString *)displayName;
-(DEDExtensionIdentifier *)dedExtensionIdentifier;
-(id)totalFilesize;
-(DEDBugSession *)fromBugSession;
-(void)setFromBugSession:(DEDBugSession *)arg1 ;
-(void)setDedExtensionIdentifier:(DEDExtensionIdentifier *)arg1 ;
@end

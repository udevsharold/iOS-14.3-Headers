/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class NSURL, NSString;

@interface EKSerializableAttachment : EKSerializableObject {

	NSURL* _urlOnDisk;
	NSString* _contentTypeFromServer;

}

@property (nonatomic,retain) NSURL * urlOnDisk;                             //@synthesize urlOnDisk=_urlOnDisk - In the implementation block
@property (nonatomic,retain) NSString * contentTypeFromServer;              //@synthesize contentTypeFromServer=_contentTypeFromServer - In the implementation block
+(id)classesForKey;
-(id)initWithAttachment:(id)arg1 ;
-(NSURL *)urlOnDisk;
-(void)setUrlOnDisk:(NSURL *)arg1 ;
-(id)createAttachment;
-(NSString *)contentTypeFromServer;
-(void)setContentTypeFromServer:(NSString *)arg1 ;
@end


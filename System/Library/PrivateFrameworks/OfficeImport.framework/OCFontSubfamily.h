/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OCFontMetadata;

@interface OCFontSubfamily : NSObject {

	NSString* _name;
	OCFontMetadata* _metadata;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OCFontMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2 ;
-(OCFontMetadata *)metadata;
-(NSString *)name;
-(id)initWithName:(id)arg1 metadata:(id)arg2 ;
@end

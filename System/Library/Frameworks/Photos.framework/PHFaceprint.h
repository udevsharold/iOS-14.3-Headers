/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface PHFaceprint : NSObject {

	long long _faceprintVersion;
	NSData* _faceprintData;

}

@property (nonatomic,readonly) long long faceprintVersion;                 //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain,readonly) NSData * faceprintData;              //@synthesize faceprintData=_faceprintData - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2 ;
-(long long)faceprintVersion;
-(NSData *)faceprintData;
-(id)dictionaryRepresentation;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class USKToken, USKObjectPath, NSDictionary;

@interface USKObject : NSObject {

	USKToken* _name;
	USKObjectPath* _path;

}

@property (nonatomic,retain,readonly) USKToken * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) USKObjectPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
-(NSDictionary *)metadata;
-(USKObjectPath *)path;
-(USKToken *)name;
@end


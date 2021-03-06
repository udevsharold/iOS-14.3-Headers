/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface ADAdServerManifestRecord : NSObject {

	BOOL _updateInProgress;
	BOOL _temporary;
	NSString* _name;
	NSURL* _URL;
	NSDictionary* _manifest;
	double _lastUpdate;

}

@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL temporary;                       //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) double lastUpdate;                    //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * manifest;              //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                //@synthesize updateInProgress=_updateInProgress - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)dealloc;
-(BOOL)temporary;
-(void)setLastUpdate:(double)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
-(NSDictionary *)manifest;
-(id)dictionaryRepresentation;
-(NSString *)name;
-(NSURL *)URL;
-(double)lastUpdate;
-(BOOL)updateInProgress;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxMetaPlug.h>

@protocol FxMetaPlug
@required
-(id)uuid;
-(id)version;
-(id)groupUUID;
-(id)displayName;
-(id)groupDisplayName;
-(id)fxPlugProperties;
-(id)versionDisplayName;

@end


@interface FxMetaPlug : NSObject <FxMetaPlug> {

	FxMetaPlugPriv* _priv;

}
+(id)syntheticUUIDBasedOnString:(id)arg1 ;
+(id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2 ;
+(id)syntheticUUIDBasedOnIndex:(int)arg1 ;
-(id)data;
-(void)dealloc;
-(id)uuid;
-(id)version;
-(id)wrapper;
-(id)groupUUID;
-(id)displayName;
-(id)groupDisplayName;
-(id)fxPlugProperties;
-(id)initWithWrapper:(id)arg1 andData:(id)arg2 ;
-(id)versionDisplayName;
-(id)fxPlugDescriptor;
@end


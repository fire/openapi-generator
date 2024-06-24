package org.openapitools.codegen.languages;

import org.openapitools.codegen.*;
import io.swagger.models.properties.ArrayProperty;
import io.swagger.models.properties.MapProperty;
import io.swagger.models.properties.Property;
import io.swagger.models.parameters.Parameter;

import java.io.File;
import java.util.*;

import org.apache.commons.lang3.StringUtils;

import static org.openapitools.codegen.utils.StringUtils.underscore;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class CppGodotEngineClientCodegen extends DefaultCodegen implements CodegenConfig {
    public static final String PROJECT_NAME = "godot_engine_client";

    private final Logger LOGGER = LoggerFactory.getLogger(CppGodotEngineClientCodegen.class);

    public CodegenType getTag() {
        return CodegenType.CLIENT;
    }

    public String getName() {
        return "cpp-godot-engine";
    }

    public String getHelp() {
        return "Generates a cpp-godot-engine client.";
    }

    public CppGodotEngineClientCodegen() {
        super();

        outputFolder = "generated-code" + File.separator + "cpp-godot-engine";
        modelTemplateFiles.put("model.mustache", ".cpp");
        apiTemplateFiles.put("api.mustache", ".cpp");
        embeddedTemplateDir = templateDir = "cpp-godot-engine";
        apiPackage = "apis";
        modelPackage = "models";
        supportingFiles.add(new SupportingFile("README.mustache", "", "README.md"));
        supportingFiles.add(new SupportingFile("scsub.mustache", "", "SCsub"));
        supportingFiles.add(new SupportingFile("register_types_cpp.mustache", "", "register_types.cpp"));
        supportingFiles.add(new SupportingFile("register_types_h.mustache", "", "register_types.h"));
        cliOptions.add(new CliOption("app_name", "short name of the application"));
        additionalProperties.put("app_name", "OpenAPI Sample");
    }
}
